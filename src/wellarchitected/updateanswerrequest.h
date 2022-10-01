// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEANSWERREQUEST_H
#define QTAWS_UPDATEANSWERREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class UpdateAnswerRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT UpdateAnswerRequest : public WellArchitectedRequest {

public:
    UpdateAnswerRequest(const UpdateAnswerRequest &other);
    UpdateAnswerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAnswerRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
