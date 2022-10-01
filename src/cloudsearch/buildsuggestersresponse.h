// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BUILDSUGGESTERSRESPONSE_H
#define QTAWS_BUILDSUGGESTERSRESPONSE_H

#include "cloudsearchresponse.h"
#include "buildsuggestersrequest.h"

namespace QtAws {
namespace CloudSearch {

class BuildSuggestersResponsePrivate;

class QTAWSCLOUDSEARCH_EXPORT BuildSuggestersResponse : public CloudSearchResponse {
    Q_OBJECT

public:
    BuildSuggestersResponse(const BuildSuggestersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BuildSuggestersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BuildSuggestersResponse)
    Q_DISABLE_COPY(BuildSuggestersResponse)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
