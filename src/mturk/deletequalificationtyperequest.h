// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUALIFICATIONTYPEREQUEST_H
#define QTAWS_DELETEQUALIFICATIONTYPEREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class DeleteQualificationTypeRequestPrivate;

class QTAWSMTURK_EXPORT DeleteQualificationTypeRequest : public MTurkRequest {

public:
    DeleteQualificationTypeRequest(const DeleteQualificationTypeRequest &other);
    DeleteQualificationTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteQualificationTypeRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
