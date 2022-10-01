// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getconfigurationresponse.h"
#include "getconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::GetConfigurationResponse
 * \brief The GetConfigurationResponse class provides an interace for Inspector2 GetConfiguration responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::getConfiguration
 */

/*!
 * Constructs a GetConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetConfigurationResponse::GetConfigurationResponse(
        const GetConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new GetConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetConfigurationRequest * GetConfigurationResponse::request() const
{
    Q_D(const GetConfigurationResponse);
    return static_cast<const GetConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 GetConfiguration \a response.
 */
void GetConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::GetConfigurationResponsePrivate
 * \brief The GetConfigurationResponsePrivate class provides private implementation for GetConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a GetConfigurationResponsePrivate object with public implementation \a q.
 */
GetConfigurationResponsePrivate::GetConfigurationResponsePrivate(
    GetConfigurationResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 GetConfiguration response element from \a xml.
 */
void GetConfigurationResponsePrivate::parseGetConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
