// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDSEARCHRESPONSE_H
#define QTAWS_CLOUDSEARCHRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawscloudsearchglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace CloudSearch {

class CloudSearchResponsePrivate;

class QTAWSCLOUDSEARCH_EXPORT CloudSearchResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    CloudSearchResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    CloudSearchResponse(CloudSearchResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloudSearchResponse)
    Q_DISABLE_COPY(CloudSearchResponse)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
