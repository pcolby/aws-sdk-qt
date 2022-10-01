// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPERIMENTTEMPLATESRESPONSE_H
#define QTAWS_LISTEXPERIMENTTEMPLATESRESPONSE_H

#include "fisresponse.h"
#include "listexperimenttemplatesrequest.h"

namespace QtAws {
namespace Fis {

class ListExperimentTemplatesResponsePrivate;

class QTAWSFIS_EXPORT ListExperimentTemplatesResponse : public FisResponse {
    Q_OBJECT

public:
    ListExperimentTemplatesResponse(const ListExperimentTemplatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListExperimentTemplatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListExperimentTemplatesResponse)
    Q_DISABLE_COPY(ListExperimentTemplatesResponse)

};

} // namespace Fis
} // namespace QtAws

#endif
