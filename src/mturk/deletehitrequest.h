// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHITREQUEST_H
#define QTAWS_DELETEHITREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class DeleteHITRequestPrivate;

class QTAWSMTURK_EXPORT DeleteHITRequest : public MTurkRequest {

public:
    DeleteHITRequest(const DeleteHITRequest &other);
    DeleteHITRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteHITRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
