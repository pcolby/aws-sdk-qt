// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSUMEROLERESPONSE_H
#define QTAWS_ASSUMEROLERESPONSE_H

#include "stsresponse.h"
#include "assumerolerequest.h"

namespace QtAws {
namespace Sts {

class AssumeRoleResponsePrivate;

class QTAWSSTS_EXPORT AssumeRoleResponse : public StsResponse {
    Q_OBJECT

public:
    AssumeRoleResponse(const AssumeRoleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssumeRoleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssumeRoleResponse)
    Q_DISABLE_COPY(AssumeRoleResponse)

};

} // namespace Sts
} // namespace QtAws

#endif
