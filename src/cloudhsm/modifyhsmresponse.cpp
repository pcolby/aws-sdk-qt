// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyhsmresponse.h"
#include "modifyhsmresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::ModifyHsmResponse
 * \brief The ModifyHsmResponse class provides an interace for CloudHsm ModifyHsm responses.
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
 * \sa CloudHsmClient::modifyHsm
 */

/*!
 * Constructs a ModifyHsmResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyHsmResponse::ModifyHsmResponse(
        const ModifyHsmRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHsmResponse(new ModifyHsmResponsePrivate(this), parent)
{
    setRequest(new ModifyHsmRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyHsmRequest * ModifyHsmResponse::request() const
{
    Q_D(const ModifyHsmResponse);
    return static_cast<const ModifyHsmRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHsm ModifyHsm \a response.
 */
void ModifyHsmResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyHsmResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHsm::ModifyHsmResponsePrivate
 * \brief The ModifyHsmResponsePrivate class provides private implementation for ModifyHsmResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a ModifyHsmResponsePrivate object with public implementation \a q.
 */
ModifyHsmResponsePrivate::ModifyHsmResponsePrivate(
    ModifyHsmResponse * const q) : CloudHsmResponsePrivate(q)
{

}

/*!
 * Parses a CloudHsm ModifyHsm response element from \a xml.
 */
void ModifyHsmResponsePrivate::parseModifyHsmResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyHsmResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHsm
} // namespace QtAws
