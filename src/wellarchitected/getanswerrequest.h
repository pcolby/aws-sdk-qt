// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETANSWERREQUEST_H
#define QTAWS_GETANSWERREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class GetAnswerRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT GetAnswerRequest : public WellArchitectedRequest {

public:
    GetAnswerRequest(const GetAnswerRequest &other);
    GetAnswerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAnswerRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
