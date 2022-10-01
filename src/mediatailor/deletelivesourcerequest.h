// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELIVESOURCEREQUEST_H
#define QTAWS_DELETELIVESOURCEREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class DeleteLiveSourceRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT DeleteLiveSourceRequest : public MediaTailorRequest {

public:
    DeleteLiveSourceRequest(const DeleteLiveSourceRequest &other);
    DeleteLiveSourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLiveSourceRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
