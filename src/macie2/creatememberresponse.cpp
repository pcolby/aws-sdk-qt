// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creatememberresponse.h"
#include "creatememberresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::CreateMemberResponse
 * \brief The CreateMemberResponse class provides an interace for Macie2 CreateMember responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::createMember
 */

/*!
 * Constructs a CreateMemberResponse object for \a reply to \a request, with parent \a parent.
 */
CreateMemberResponse::CreateMemberResponse(
        const CreateMemberRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new CreateMemberResponsePrivate(this), parent)
{
    setRequest(new CreateMemberRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateMemberRequest * CreateMemberResponse::request() const
{
    Q_D(const CreateMemberResponse);
    return static_cast<const CreateMemberRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 CreateMember \a response.
 */
void CreateMemberResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateMemberResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::CreateMemberResponsePrivate
 * \brief The CreateMemberResponsePrivate class provides private implementation for CreateMemberResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a CreateMemberResponsePrivate object with public implementation \a q.
 */
CreateMemberResponsePrivate::CreateMemberResponsePrivate(
    CreateMemberResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 CreateMember response element from \a xml.
 */
void CreateMemberResponsePrivate::parseCreateMemberResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMemberResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
