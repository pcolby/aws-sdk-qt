// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createclassificationjobresponse.h"
#include "createclassificationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::CreateClassificationJobResponse
 * \brief The CreateClassificationJobResponse class provides an interace for Macie2 CreateClassificationJob responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::createClassificationJob
 */

/*!
 * Constructs a CreateClassificationJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateClassificationJobResponse::CreateClassificationJobResponse(
        const CreateClassificationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new CreateClassificationJobResponsePrivate(this), parent)
{
    setRequest(new CreateClassificationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateClassificationJobRequest * CreateClassificationJobResponse::request() const
{
    Q_D(const CreateClassificationJobResponse);
    return static_cast<const CreateClassificationJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 CreateClassificationJob \a response.
 */
void CreateClassificationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateClassificationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::CreateClassificationJobResponsePrivate
 * \brief The CreateClassificationJobResponsePrivate class provides private implementation for CreateClassificationJobResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a CreateClassificationJobResponsePrivate object with public implementation \a q.
 */
CreateClassificationJobResponsePrivate::CreateClassificationJobResponsePrivate(
    CreateClassificationJobResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 CreateClassificationJob response element from \a xml.
 */
void CreateClassificationJobResponsePrivate::parseCreateClassificationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateClassificationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
