// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSUMEROLEWITHSAMLRESPONSE_H
#define QTAWS_ASSUMEROLEWITHSAMLRESPONSE_H

#include "stsresponse.h"
#include "assumerolewithsamlrequest.h"

namespace QtAws {
namespace Sts {

class AssumeRoleWithSAMLResponsePrivate;

class QTAWSSTS_EXPORT AssumeRoleWithSAMLResponse : public StsResponse {
    Q_OBJECT

public:
    AssumeRoleWithSAMLResponse(const AssumeRoleWithSAMLRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssumeRoleWithSAMLRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssumeRoleWithSAMLResponse)
    Q_DISABLE_COPY(AssumeRoleWithSAMLResponse)

};

} // namespace Sts
} // namespace QtAws

#endif
