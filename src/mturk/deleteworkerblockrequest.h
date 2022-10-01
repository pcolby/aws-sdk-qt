// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKERBLOCKREQUEST_H
#define QTAWS_DELETEWORKERBLOCKREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class DeleteWorkerBlockRequestPrivate;

class QTAWSMTURK_EXPORT DeleteWorkerBlockRequest : public MTurkRequest {

public:
    DeleteWorkerBlockRequest(const DeleteWorkerBlockRequest &other);
    DeleteWorkerBlockRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWorkerBlockRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
