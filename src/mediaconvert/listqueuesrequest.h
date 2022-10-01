// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUEUESREQUEST_H
#define QTAWS_LISTQUEUESREQUEST_H

#include "mediaconvertrequest.h"

namespace QtAws {
namespace MediaConvert {

class ListQueuesRequestPrivate;

class QTAWSMEDIACONVERT_EXPORT ListQueuesRequest : public MediaConvertRequest {

public:
    ListQueuesRequest(const ListQueuesRequest &other);
    ListQueuesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListQueuesRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
