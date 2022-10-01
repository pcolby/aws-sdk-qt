// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTUDIOSESSIONMAPPINGSREQUEST_H
#define QTAWS_LISTSTUDIOSESSIONMAPPINGSREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class ListStudioSessionMappingsRequestPrivate;

class QTAWSEMR_EXPORT ListStudioSessionMappingsRequest : public EmrRequest {

public:
    ListStudioSessionMappingsRequest(const ListStudioSessionMappingsRequest &other);
    ListStudioSessionMappingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStudioSessionMappingsRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
