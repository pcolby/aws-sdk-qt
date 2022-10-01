// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletejobresponse.h"
#include "deletejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::DeleteJobResponse
 * \brief The DeleteJobResponse class provides an interace for Amplify DeleteJob responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::deleteJob
 */

/*!
 * Constructs a DeleteJobResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteJobResponse::DeleteJobResponse(
        const DeleteJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new DeleteJobResponsePrivate(this), parent)
{
    setRequest(new DeleteJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteJobRequest * DeleteJobResponse::request() const
{
    Q_D(const DeleteJobResponse);
    return static_cast<const DeleteJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify DeleteJob \a response.
 */
void DeleteJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::DeleteJobResponsePrivate
 * \brief The DeleteJobResponsePrivate class provides private implementation for DeleteJobResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a DeleteJobResponsePrivate object with public implementation \a q.
 */
DeleteJobResponsePrivate::DeleteJobResponsePrivate(
    DeleteJobResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify DeleteJob response element from \a xml.
 */
void DeleteJobResponsePrivate::parseDeleteJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
