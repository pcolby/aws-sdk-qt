// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEJOBREQUEST_H
#define QTAWS_DELETEJOBREQUEST_H

#include "amplifyrequest.h"

namespace QtAws {
namespace Amplify {

class DeleteJobRequestPrivate;

class QTAWSAMPLIFY_EXPORT DeleteJobRequest : public AmplifyRequest {

public:
    DeleteJobRequest(const DeleteJobRequest &other);
    DeleteJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteJobRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
