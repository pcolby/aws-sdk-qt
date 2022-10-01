// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgroupresponse.h"
#include "getgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetGroupResponse
 * \brief The GetGroupResponse class provides an interace for Greengrass GetGroup responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getGroup
 */

/*!
 * Constructs a GetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
GetGroupResponse::GetGroupResponse(
        const GetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetGroupResponsePrivate(this), parent)
{
    setRequest(new GetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGroupRequest * GetGroupResponse::request() const
{
    Q_D(const GetGroupResponse);
    return static_cast<const GetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetGroup \a response.
 */
void GetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetGroupResponsePrivate
 * \brief The GetGroupResponsePrivate class provides private implementation for GetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetGroupResponsePrivate object with public implementation \a q.
 */
GetGroupResponsePrivate::GetGroupResponsePrivate(
    GetGroupResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetGroup response element from \a xml.
 */
void GetGroupResponsePrivate::parseGetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
