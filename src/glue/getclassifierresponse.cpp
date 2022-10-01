// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getclassifierresponse.h"
#include "getclassifierresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetClassifierResponse
 * \brief The GetClassifierResponse class provides an interace for Glue GetClassifier responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getClassifier
 */

/*!
 * Constructs a GetClassifierResponse object for \a reply to \a request, with parent \a parent.
 */
GetClassifierResponse::GetClassifierResponse(
        const GetClassifierRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetClassifierResponsePrivate(this), parent)
{
    setRequest(new GetClassifierRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetClassifierRequest * GetClassifierResponse::request() const
{
    Q_D(const GetClassifierResponse);
    return static_cast<const GetClassifierRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetClassifier \a response.
 */
void GetClassifierResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetClassifierResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetClassifierResponsePrivate
 * \brief The GetClassifierResponsePrivate class provides private implementation for GetClassifierResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetClassifierResponsePrivate object with public implementation \a q.
 */
GetClassifierResponsePrivate::GetClassifierResponsePrivate(
    GetClassifierResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetClassifier response element from \a xml.
 */
void GetClassifierResponsePrivate::parseGetClassifierResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetClassifierResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
