// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPJOBRUNRESPONSE_H
#define QTAWS_STOPJOBRUNRESPONSE_H

#include "databrewresponse.h"
#include "stopjobrunrequest.h"

namespace QtAws {
namespace DataBrew {

class StopJobRunResponsePrivate;

class QTAWSDATABREW_EXPORT StopJobRunResponse : public DataBrewResponse {
    Q_OBJECT

public:
    StopJobRunResponse(const StopJobRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopJobRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopJobRunResponse)
    Q_DISABLE_COPY(StopJobRunResponse)

};

} // namespace DataBrew
} // namespace QtAws

#endif
