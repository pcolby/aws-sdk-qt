// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopjobresponse.h"
#include "stopjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::StopJobResponse
 * \brief The StopJobResponse class provides an interace for Amplify StopJob responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::stopJob
 */

/*!
 * Constructs a StopJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopJobResponse::StopJobResponse(
        const StopJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new StopJobResponsePrivate(this), parent)
{
    setRequest(new StopJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopJobRequest * StopJobResponse::request() const
{
    Q_D(const StopJobResponse);
    return static_cast<const StopJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify StopJob \a response.
 */
void StopJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::StopJobResponsePrivate
 * \brief The StopJobResponsePrivate class provides private implementation for StopJobResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a StopJobResponsePrivate object with public implementation \a q.
 */
StopJobResponsePrivate::StopJobResponsePrivate(
    StopJobResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify StopJob response element from \a xml.
 */
void StopJobResponsePrivate::parseStopJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
