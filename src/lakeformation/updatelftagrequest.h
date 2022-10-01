// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELFTAGREQUEST_H
#define QTAWS_UPDATELFTAGREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class UpdateLFTagRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT UpdateLFTagRequest : public LakeFormationRequest {

public:
    UpdateLFTagRequest(const UpdateLFTagRequest &other);
    UpdateLFTagRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLFTagRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
