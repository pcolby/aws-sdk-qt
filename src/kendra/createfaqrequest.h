// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFAQREQUEST_H
#define QTAWS_CREATEFAQREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class CreateFaqRequestPrivate;

class QTAWSKENDRA_EXPORT CreateFaqRequest : public KendraRequest {

public:
    CreateFaqRequest(const CreateFaqRequest &other);
    CreateFaqRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFaqRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
