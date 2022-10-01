// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINDEXFIELDREQUEST_H
#define QTAWS_DELETEINDEXFIELDREQUEST_H

#include "cloudsearchrequest.h"

namespace QtAws {
namespace CloudSearch {

class DeleteIndexFieldRequestPrivate;

class QTAWSCLOUDSEARCH_EXPORT DeleteIndexFieldRequest : public CloudSearchRequest {

public:
    DeleteIndexFieldRequest(const DeleteIndexFieldRequest &other);
    DeleteIndexFieldRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIndexFieldRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
