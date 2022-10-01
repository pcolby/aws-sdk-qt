// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createhsmresponse.h"
#include "createhsmresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::CreateHsmResponse
 * \brief The CreateHsmResponse class provides an interace for CloudHsm CreateHsm responses.
 *
 * \inmodule QtAwsCloudHsm
 *
 *  <fullname>AWS CloudHSM Service</fullname>
 * 
 *  This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 *  href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 * 
 *  Reference</a>>
 * 
 *  <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 *  CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 *  <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * \sa CloudHsmClient::createHsm
 */

/*!
 * Constructs a CreateHsmResponse object for \a reply to \a request, with parent \a parent.
 */
CreateHsmResponse::CreateHsmResponse(
        const CreateHsmRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHsmResponse(new CreateHsmResponsePrivate(this), parent)
{
    setRequest(new CreateHsmRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateHsmRequest * CreateHsmResponse::request() const
{
    Q_D(const CreateHsmResponse);
    return static_cast<const CreateHsmRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHsm CreateHsm \a response.
 */
void CreateHsmResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateHsmResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHsm::CreateHsmResponsePrivate
 * \brief The CreateHsmResponsePrivate class provides private implementation for CreateHsmResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a CreateHsmResponsePrivate object with public implementation \a q.
 */
CreateHsmResponsePrivate::CreateHsmResponsePrivate(
    CreateHsmResponse * const q) : CloudHsmResponsePrivate(q)
{

}

/*!
 * Parses a CloudHsm CreateHsm response element from \a xml.
 */
void CreateHsmResponsePrivate::parseCreateHsmResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateHsmResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHsm
} // namespace QtAws
