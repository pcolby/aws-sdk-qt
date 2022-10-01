// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEFINEINDEXFIELDREQUEST_H
#define QTAWS_DEFINEINDEXFIELDREQUEST_H

#include "cloudsearchrequest.h"

namespace QtAws {
namespace CloudSearch {

class DefineIndexFieldRequestPrivate;

class QTAWSCLOUDSEARCH_EXPORT DefineIndexFieldRequest : public CloudSearchRequest {

public:
    DefineIndexFieldRequest(const DefineIndexFieldRequest &other);
    DefineIndexFieldRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DefineIndexFieldRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
