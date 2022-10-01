// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOURCEGROUPSTAGGINGRESPONSE_H
#define QTAWS_RESOURCEGROUPSTAGGINGRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsresourcegroupstaggingglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class ResourceGroupsTaggingResponsePrivate;

class QTAWSRESOURCEGROUPSTAGGING_EXPORT ResourceGroupsTaggingResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ResourceGroupsTaggingResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ResourceGroupsTaggingResponse(ResourceGroupsTaggingResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResourceGroupsTaggingResponse)
    Q_DISABLE_COPY(ResourceGroupsTaggingResponse)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif
