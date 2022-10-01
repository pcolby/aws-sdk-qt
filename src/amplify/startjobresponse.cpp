// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startjobresponse.h"
#include "startjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::StartJobResponse
 * \brief The StartJobResponse class provides an interace for Amplify StartJob responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::startJob
 */

/*!
 * Constructs a StartJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartJobResponse::StartJobResponse(
        const StartJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new StartJobResponsePrivate(this), parent)
{
    setRequest(new StartJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartJobRequest * StartJobResponse::request() const
{
    Q_D(const StartJobResponse);
    return static_cast<const StartJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify StartJob \a response.
 */
void StartJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::StartJobResponsePrivate
 * \brief The StartJobResponsePrivate class provides private implementation for StartJobResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a StartJobResponsePrivate object with public implementation \a q.
 */
StartJobResponsePrivate::StartJobResponsePrivate(
    StartJobResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify StartJob response element from \a xml.
 */
void StartJobResponsePrivate::parseStartJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
