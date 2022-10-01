// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLFTAGREQUEST_H
#define QTAWS_GETLFTAGREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class GetLFTagRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT GetLFTagRequest : public LakeFormationRequest {

public:
    GetLFTagRequest(const GetLFTagRequest &other);
    GetLFTagRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLFTagRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
