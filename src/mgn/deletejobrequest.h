// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEJOBREQUEST_H
#define QTAWS_DELETEJOBREQUEST_H

#include "mgnrequest.h"

namespace QtAws {
namespace Mgn {

class DeleteJobRequestPrivate;

class QTAWSMGN_EXPORT DeleteJobRequest : public MgnRequest {

public:
    DeleteJobRequest(const DeleteJobRequest &other);
    DeleteJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteJobRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
