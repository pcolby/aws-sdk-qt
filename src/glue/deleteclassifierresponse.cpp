// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteclassifierresponse.h"
#include "deleteclassifierresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteClassifierResponse
 * \brief The DeleteClassifierResponse class provides an interace for Glue DeleteClassifier responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteClassifier
 */

/*!
 * Constructs a DeleteClassifierResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteClassifierResponse::DeleteClassifierResponse(
        const DeleteClassifierRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteClassifierResponsePrivate(this), parent)
{
    setRequest(new DeleteClassifierRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteClassifierRequest * DeleteClassifierResponse::request() const
{
    Q_D(const DeleteClassifierResponse);
    return static_cast<const DeleteClassifierRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue DeleteClassifier \a response.
 */
void DeleteClassifierResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteClassifierResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeleteClassifierResponsePrivate
 * \brief The DeleteClassifierResponsePrivate class provides private implementation for DeleteClassifierResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteClassifierResponsePrivate object with public implementation \a q.
 */
DeleteClassifierResponsePrivate::DeleteClassifierResponsePrivate(
    DeleteClassifierResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeleteClassifier response element from \a xml.
 */
void DeleteClassifierResponsePrivate::parseDeleteClassifierResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteClassifierResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
