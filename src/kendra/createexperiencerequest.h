// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPERIENCEREQUEST_H
#define QTAWS_CREATEEXPERIENCEREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class CreateExperienceRequestPrivate;

class QTAWSKENDRA_EXPORT CreateExperienceRequest : public KendraRequest {

public:
    CreateExperienceRequest(const CreateExperienceRequest &other);
    CreateExperienceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateExperienceRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
