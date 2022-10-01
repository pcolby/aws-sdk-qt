// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELENSVERSIONREQUEST_H
#define QTAWS_CREATELENSVERSIONREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class CreateLensVersionRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT CreateLensVersionRequest : public WellArchitectedRequest {

public:
    CreateLensVersionRequest(const CreateLensVersionRequest &other);
    CreateLensVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLensVersionRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
