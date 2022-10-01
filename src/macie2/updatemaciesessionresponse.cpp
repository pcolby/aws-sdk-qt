// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemaciesessionresponse.h"
#include "updatemaciesessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::UpdateMacieSessionResponse
 * \brief The UpdateMacieSessionResponse class provides an interace for Macie2 UpdateMacieSession responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::updateMacieSession
 */

/*!
 * Constructs a UpdateMacieSessionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateMacieSessionResponse::UpdateMacieSessionResponse(
        const UpdateMacieSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new UpdateMacieSessionResponsePrivate(this), parent)
{
    setRequest(new UpdateMacieSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateMacieSessionRequest * UpdateMacieSessionResponse::request() const
{
    Q_D(const UpdateMacieSessionResponse);
    return static_cast<const UpdateMacieSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 UpdateMacieSession \a response.
 */
void UpdateMacieSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateMacieSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::UpdateMacieSessionResponsePrivate
 * \brief The UpdateMacieSessionResponsePrivate class provides private implementation for UpdateMacieSessionResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a UpdateMacieSessionResponsePrivate object with public implementation \a q.
 */
UpdateMacieSessionResponsePrivate::UpdateMacieSessionResponsePrivate(
    UpdateMacieSessionResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 UpdateMacieSession response element from \a xml.
 */
void UpdateMacieSessionResponsePrivate::parseUpdateMacieSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMacieSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
