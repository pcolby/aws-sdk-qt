// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERRESOURCERESPONSE_H
#define QTAWS_REGISTERRESOURCERESPONSE_H

#include "lakeformationresponse.h"
#include "registerresourcerequest.h"

namespace QtAws {
namespace LakeFormation {

class RegisterResourceResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT RegisterResourceResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    RegisterResourceResponse(const RegisterResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterResourceResponse)
    Q_DISABLE_COPY(RegisterResourceResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
