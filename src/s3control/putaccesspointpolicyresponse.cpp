// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putaccesspointpolicyresponse.h"
#include "putaccesspointpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::PutAccessPointPolicyResponse
 * \brief The PutAccessPointPolicyResponse class provides an interace for S3Control PutAccessPointPolicy responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::putAccessPointPolicy
 */

/*!
 * Constructs a PutAccessPointPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutAccessPointPolicyResponse::PutAccessPointPolicyResponse(
        const PutAccessPointPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new PutAccessPointPolicyResponsePrivate(this), parent)
{
    setRequest(new PutAccessPointPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutAccessPointPolicyRequest * PutAccessPointPolicyResponse::request() const
{
    Q_D(const PutAccessPointPolicyResponse);
    return static_cast<const PutAccessPointPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control PutAccessPointPolicy \a response.
 */
void PutAccessPointPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutAccessPointPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::PutAccessPointPolicyResponsePrivate
 * \brief The PutAccessPointPolicyResponsePrivate class provides private implementation for PutAccessPointPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a PutAccessPointPolicyResponsePrivate object with public implementation \a q.
 */
PutAccessPointPolicyResponsePrivate::PutAccessPointPolicyResponsePrivate(
    PutAccessPointPolicyResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control PutAccessPointPolicy response element from \a xml.
 */
void PutAccessPointPolicyResponsePrivate::parsePutAccessPointPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutAccessPointPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
