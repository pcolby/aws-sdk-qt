// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateclassifierresponse.h"
#include "updateclassifierresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateClassifierResponse
 * \brief The UpdateClassifierResponse class provides an interace for Glue UpdateClassifier responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateClassifier
 */

/*!
 * Constructs a UpdateClassifierResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateClassifierResponse::UpdateClassifierResponse(
        const UpdateClassifierRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateClassifierResponsePrivate(this), parent)
{
    setRequest(new UpdateClassifierRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateClassifierRequest * UpdateClassifierResponse::request() const
{
    Q_D(const UpdateClassifierResponse);
    return static_cast<const UpdateClassifierRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue UpdateClassifier \a response.
 */
void UpdateClassifierResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateClassifierResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::UpdateClassifierResponsePrivate
 * \brief The UpdateClassifierResponsePrivate class provides private implementation for UpdateClassifierResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateClassifierResponsePrivate object with public implementation \a q.
 */
UpdateClassifierResponsePrivate::UpdateClassifierResponsePrivate(
    UpdateClassifierResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue UpdateClassifier response element from \a xml.
 */
void UpdateClassifierResponsePrivate::parseUpdateClassifierResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateClassifierResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
