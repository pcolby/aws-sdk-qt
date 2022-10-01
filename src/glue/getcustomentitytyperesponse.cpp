// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcustomentitytyperesponse.h"
#include "getcustomentitytyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetCustomEntityTypeResponse
 * \brief The GetCustomEntityTypeResponse class provides an interace for Glue GetCustomEntityType responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getCustomEntityType
 */

/*!
 * Constructs a GetCustomEntityTypeResponse object for \a reply to \a request, with parent \a parent.
 */
GetCustomEntityTypeResponse::GetCustomEntityTypeResponse(
        const GetCustomEntityTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetCustomEntityTypeResponsePrivate(this), parent)
{
    setRequest(new GetCustomEntityTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCustomEntityTypeRequest * GetCustomEntityTypeResponse::request() const
{
    Q_D(const GetCustomEntityTypeResponse);
    return static_cast<const GetCustomEntityTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetCustomEntityType \a response.
 */
void GetCustomEntityTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCustomEntityTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetCustomEntityTypeResponsePrivate
 * \brief The GetCustomEntityTypeResponsePrivate class provides private implementation for GetCustomEntityTypeResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetCustomEntityTypeResponsePrivate object with public implementation \a q.
 */
GetCustomEntityTypeResponsePrivate::GetCustomEntityTypeResponsePrivate(
    GetCustomEntityTypeResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetCustomEntityType response element from \a xml.
 */
void GetCustomEntityTypeResponsePrivate::parseGetCustomEntityTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCustomEntityTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
