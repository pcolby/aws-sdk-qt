// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPERIENCEREQUEST_H
#define QTAWS_DELETEEXPERIENCEREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class DeleteExperienceRequestPrivate;

class QTAWSKENDRA_EXPORT DeleteExperienceRequest : public KendraRequest {

public:
    DeleteExperienceRequest(const DeleteExperienceRequest &other);
    DeleteExperienceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteExperienceRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
