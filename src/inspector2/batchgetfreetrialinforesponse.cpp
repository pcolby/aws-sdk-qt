// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetfreetrialinforesponse.h"
#include "batchgetfreetrialinforesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::BatchGetFreeTrialInfoResponse
 * \brief The BatchGetFreeTrialInfoResponse class provides an interace for Inspector2 BatchGetFreeTrialInfo responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::batchGetFreeTrialInfo
 */

/*!
 * Constructs a BatchGetFreeTrialInfoResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetFreeTrialInfoResponse::BatchGetFreeTrialInfoResponse(
        const BatchGetFreeTrialInfoRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new BatchGetFreeTrialInfoResponsePrivate(this), parent)
{
    setRequest(new BatchGetFreeTrialInfoRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetFreeTrialInfoRequest * BatchGetFreeTrialInfoResponse::request() const
{
    Q_D(const BatchGetFreeTrialInfoResponse);
    return static_cast<const BatchGetFreeTrialInfoRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 BatchGetFreeTrialInfo \a response.
 */
void BatchGetFreeTrialInfoResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetFreeTrialInfoResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::BatchGetFreeTrialInfoResponsePrivate
 * \brief The BatchGetFreeTrialInfoResponsePrivate class provides private implementation for BatchGetFreeTrialInfoResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a BatchGetFreeTrialInfoResponsePrivate object with public implementation \a q.
 */
BatchGetFreeTrialInfoResponsePrivate::BatchGetFreeTrialInfoResponsePrivate(
    BatchGetFreeTrialInfoResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 BatchGetFreeTrialInfo response element from \a xml.
 */
void BatchGetFreeTrialInfoResponsePrivate::parseBatchGetFreeTrialInfoResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetFreeTrialInfoResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
