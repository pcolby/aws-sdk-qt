// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateappresponse.h"
#include "updateappresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::UpdateAppResponse
 * \brief The UpdateAppResponse class provides an interace for Amplify UpdateApp responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::updateApp
 */

/*!
 * Constructs a UpdateAppResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAppResponse::UpdateAppResponse(
        const UpdateAppRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new UpdateAppResponsePrivate(this), parent)
{
    setRequest(new UpdateAppRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAppRequest * UpdateAppResponse::request() const
{
    Q_D(const UpdateAppResponse);
    return static_cast<const UpdateAppRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify UpdateApp \a response.
 */
void UpdateAppResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAppResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::UpdateAppResponsePrivate
 * \brief The UpdateAppResponsePrivate class provides private implementation for UpdateAppResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a UpdateAppResponsePrivate object with public implementation \a q.
 */
UpdateAppResponsePrivate::UpdateAppResponsePrivate(
    UpdateAppResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify UpdateApp response element from \a xml.
 */
void UpdateAppResponsePrivate::parseUpdateAppResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAppResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
