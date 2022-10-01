// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULESPACKAGESRESPONSE_H
#define QTAWS_LISTRULESPACKAGESRESPONSE_H

#include "inspectorresponse.h"
#include "listrulespackagesrequest.h"

namespace QtAws {
namespace Inspector {

class ListRulesPackagesResponsePrivate;

class QTAWSINSPECTOR_EXPORT ListRulesPackagesResponse : public InspectorResponse {
    Q_OBJECT

public:
    ListRulesPackagesResponse(const ListRulesPackagesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRulesPackagesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRulesPackagesResponse)
    Q_DISABLE_COPY(ListRulesPackagesResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif
