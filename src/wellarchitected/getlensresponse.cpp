// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlensresponse.h"
#include "getlensresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::GetLensResponse
 * \brief The GetLensResponse class provides an interace for WellArchitected GetLens responses.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>Well-Architected Tool</fullname>
 * 
 *  This is the <i>Well-Architected Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
 *  href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services Management Console</a>. For information about
 *  the Well-Architected Tool, see the <a
 *  href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected Tool User
 *
 * \sa WellArchitectedClient::getLens
 */

/*!
 * Constructs a GetLensResponse object for \a reply to \a request, with parent \a parent.
 */
GetLensResponse::GetLensResponse(
        const GetLensRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new GetLensResponsePrivate(this), parent)
{
    setRequest(new GetLensRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLensRequest * GetLensResponse::request() const
{
    Q_D(const GetLensResponse);
    return static_cast<const GetLensRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected GetLens \a response.
 */
void GetLensResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLensResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::GetLensResponsePrivate
 * \brief The GetLensResponsePrivate class provides private implementation for GetLensResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a GetLensResponsePrivate object with public implementation \a q.
 */
GetLensResponsePrivate::GetLensResponsePrivate(
    GetLensResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected GetLens response element from \a xml.
 */
void GetLensResponsePrivate::parseGetLensResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLensResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
