// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELFTAGREQUEST_H
#define QTAWS_CREATELFTAGREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class CreateLFTagRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT CreateLFTagRequest : public LakeFormationRequest {

public:
    CreateLFTagRequest(const CreateLFTagRequest &other);
    CreateLFTagRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLFTagRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
