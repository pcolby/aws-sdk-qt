// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFAQREQUEST_H
#define QTAWS_DELETEFAQREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class DeleteFaqRequestPrivate;

class QTAWSKENDRA_EXPORT DeleteFaqRequest : public KendraRequest {

public:
    DeleteFaqRequest(const DeleteFaqRequest &other);
    DeleteFaqRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFaqRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
