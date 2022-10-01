// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELENSSHAREREQUEST_H
#define QTAWS_CREATELENSSHAREREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class CreateLensShareRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT CreateLensShareRequest : public WellArchitectedRequest {

public:
    CreateLensShareRequest(const CreateLensShareRequest &other);
    CreateLensShareRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLensShareRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
