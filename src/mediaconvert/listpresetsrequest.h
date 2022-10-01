// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRESETSREQUEST_H
#define QTAWS_LISTPRESETSREQUEST_H

#include "mediaconvertrequest.h"

namespace QtAws {
namespace MediaConvert {

class ListPresetsRequestPrivate;

class QTAWSMEDIACONVERT_EXPORT ListPresetsRequest : public MediaConvertRequest {

public:
    ListPresetsRequest(const ListPresetsRequest &other);
    ListPresetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPresetsRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
