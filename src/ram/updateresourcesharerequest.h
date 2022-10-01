// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCESHAREREQUEST_H
#define QTAWS_UPDATERESOURCESHAREREQUEST_H

#include "ramrequest.h"

namespace QtAws {
namespace Ram {

class UpdateResourceShareRequestPrivate;

class QTAWSRAM_EXPORT UpdateResourceShareRequest : public RamRequest {

public:
    UpdateResourceShareRequest(const UpdateResourceShareRequest &other);
    UpdateResourceShareRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResourceShareRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
