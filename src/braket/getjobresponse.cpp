// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getjobresponse.h"
#include "getjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Braket {

/*!
 * \class QtAws::Braket::GetJobResponse
 * \brief The GetJobResponse class provides an interace for Braket GetJob responses.
 *
 * \inmodule QtAwsBraket
 *
 *  The Amazon Braket API Reference provides information about the operations and structures supported in Amazon
 * 
 *  Braket>
 * 
 *  Additional
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/braket/latest/developerguide/what-is-braket.html">Amazon Braket Developer Guide</a>
 *
 * \sa BraketClient::getJob
 */

/*!
 * Constructs a GetJobResponse object for \a reply to \a request, with parent \a parent.
 */
GetJobResponse::GetJobResponse(
        const GetJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BraketResponse(new GetJobResponsePrivate(this), parent)
{
    setRequest(new GetJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetJobRequest * GetJobResponse::request() const
{
    Q_D(const GetJobResponse);
    return static_cast<const GetJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Braket GetJob \a response.
 */
void GetJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Braket::GetJobResponsePrivate
 * \brief The GetJobResponsePrivate class provides private implementation for GetJobResponse.
 * \internal
 *
 * \inmodule QtAwsBraket
 */

/*!
 * Constructs a GetJobResponsePrivate object with public implementation \a q.
 */
GetJobResponsePrivate::GetJobResponsePrivate(
    GetJobResponse * const q) : BraketResponsePrivate(q)
{

}

/*!
 * Parses a Braket GetJob response element from \a xml.
 */
void GetJobResponsePrivate::parseGetJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Braket
} // namespace QtAws
