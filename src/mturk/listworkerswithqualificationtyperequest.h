// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKERSWITHQUALIFICATIONTYPEREQUEST_H
#define QTAWS_LISTWORKERSWITHQUALIFICATIONTYPEREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class ListWorkersWithQualificationTypeRequestPrivate;

class QTAWSMTURK_EXPORT ListWorkersWithQualificationTypeRequest : public MTurkRequest {

public:
    ListWorkersWithQualificationTypeRequest(const ListWorkersWithQualificationTypeRequest &other);
    ListWorkersWithQualificationTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorkersWithQualificationTypeRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
