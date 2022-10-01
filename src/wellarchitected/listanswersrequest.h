// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANSWERSREQUEST_H
#define QTAWS_LISTANSWERSREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class ListAnswersRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT ListAnswersRequest : public WellArchitectedRequest {

public:
    ListAnswersRequest(const ListAnswersRequest &other);
    ListAnswersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAnswersRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
