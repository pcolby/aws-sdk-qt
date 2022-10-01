// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKERBLOCKREQUEST_H
#define QTAWS_CREATEWORKERBLOCKREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class CreateWorkerBlockRequestPrivate;

class QTAWSMTURK_EXPORT CreateWorkerBlockRequest : public MTurkRequest {

public:
    CreateWorkerBlockRequest(const CreateWorkerBlockRequest &other);
    CreateWorkerBlockRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorkerBlockRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
