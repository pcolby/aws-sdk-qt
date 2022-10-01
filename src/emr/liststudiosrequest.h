// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTUDIOSREQUEST_H
#define QTAWS_LISTSTUDIOSREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class ListStudiosRequestPrivate;

class QTAWSEMR_EXPORT ListStudiosRequest : public EmrRequest {

public:
    ListStudiosRequest(const ListStudiosRequest &other);
    ListStudiosRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStudiosRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
