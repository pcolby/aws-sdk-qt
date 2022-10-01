// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createimportjobresponse.h"
#include "createimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::CreateImportJobResponse
 * \brief The CreateImportJobResponse class provides an interace for SESv2 CreateImportJob responses.
 *
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 *
 * \sa SESv2Client::createImportJob
 */

/*!
 * Constructs a CreateImportJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateImportJobResponse::CreateImportJobResponse(
        const CreateImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new CreateImportJobResponsePrivate(this), parent)
{
    setRequest(new CreateImportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateImportJobRequest * CreateImportJobResponse::request() const
{
    Q_D(const CreateImportJobResponse);
    return static_cast<const CreateImportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 CreateImportJob \a response.
 */
void CreateImportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateImportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::CreateImportJobResponsePrivate
 * \brief The CreateImportJobResponsePrivate class provides private implementation for CreateImportJobResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a CreateImportJobResponsePrivate object with public implementation \a q.
 */
CreateImportJobResponsePrivate::CreateImportJobResponsePrivate(
    CreateImportJobResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 CreateImportJob response element from \a xml.
 */
void CreateImportJobResponsePrivate::parseCreateImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateImportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
